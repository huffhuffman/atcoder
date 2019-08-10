// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8').trim()

const stdin = `8
4 23 75 0 23 96 50 100`

const n = Number(stdin.split('\n')[0])
const h = stdin
  .split('\n')[1]
  .split(' ')
  .map(Number)

const ans = () => {
  let current = []

  for (let i = 0; i < n; i++) {
    current.push(0)
  }

  // 高さが足りないものを全てグループ化する
  // グループ化したものをすべて1増やす
  // 足りないものがなくなるまで繰り返す

  let count = 0
  while (1) {
    let head = -1
    let tail = -1

    // グループの始点と終点を探す
    for (let i = 0; i < n; i++) {
      if (head === -1 && current[i] < h[i]) {
        head = i
      }

      if (head > -1 && current[i] >= h[i]) {
        tail = i
        break
      }
    }

    // 終了条件
    if (head === -1) {
      return count
    }

    if (tail === -1) {
      tail = n
    }

    for (let i = head; i < tail; i++) {
      current[i] += 1
    }

    count++
  }
}

console.log(ans())
