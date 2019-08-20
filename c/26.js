// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8').trim()

const stdin = `10
1
2
3
4
5
6
7
8
9`

const input = stdin.split('\n')

const [n, ...b] = input.map(Number)
const bs = b.map(v => v - 1)

let subs = []
for (let i = 0; i < bs.length; i++) {
  const sub = i + 1

  const boss = bs[i]

  subs[boss] = subs[boss] === undefined ? [sub] : [...subs[boss], sub]
}

const dfs = id => {
  if (subs[id] === undefined || subs[id].length <= 0) return 1

  let minP = Infinity
  let maxP = 0

  for (let i = 0; i < subs[id].length; i++) {
    const p = dfs(subs[id][i])
    minP = Math.min(minP, p)
    maxP = Math.max(maxP, p)
  }

  return minP + maxP + 1
}

const ans = () => {
  const res = dfs(0)
  console.log(res)
}

ans()
