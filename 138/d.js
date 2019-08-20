// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8').trim()

const stdin = `6 2
1 2
1 3
2 4
3 6
2 5
1 10
1 10`

const input = stdin.split('\n')

const [n, q] = input[0].split(' ').map(Number)

let to = []
let counts = []

for (let i = 0; i < n; i++) {
  to.push([])
  counts.push(0)
}

for (let i = 1; i < n + q; i++) {
  if (i < n) {
    let [a, b] = input[i].split(' ').map(Number)
    --a
    --b
    to[a].push(b)
    to[b].push(a)
  } else {
    let [p, x] = input[i].split(' ').map(Number)
    --p
    counts[p] += x
  }
}

const ans = () => {
  let p = 0

  let stack = []
  let pStack = []
  for (let i = 0; i < to[p].length; i++) {
    stack.push(to[p][i])
    pStack.push(p)
  }

  let done = new Set()
  done.add(p)

  // スタックが空になったら終了
  while (stack.length > 0) {
    // スタックからノードを取り出す
    const v = stack.pop()
    const parent = pStack.pop()

    // そのノードのcountに親のcountを足しこむ。その後ノードを探索済みにする
    counts[v] += counts[parent]
    done.add(v)

    // ノードの子をスタックに追加し、ノードを親にする
    const childs = to[v]
    for (let i = 0; i < childs.length; i++) {
      // 既に探索済みの子は追加しない
      if (done.has(childs[i])) continue
      stack.push(childs[i])
      pStack.push(v)
    }
  }

  console.log(counts.join(' '))
}

ans()
