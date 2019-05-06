// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8')

const stdin = `2
5 1 1
100 1 1`

const n = Number(stdin.split('\n')[0])

const [, ...rest] = stdin.split('\n').filter(e => e)

const txy = rest.map(e => e.split(' ').map(Number))

let target = [0, 0]

const res = _ => {
  for (let i = 0; i < txy.length; i++) {
    const reachable = evalPlan(target, txy[i])

    if (reachable) {
    } else {
      return 'No'
    }
  }
  return 'Yes'
}

const evalPlan = (prev, [t, x, y]) => {
  const mDiff = Math.abs(x - prev[0]) + Math.abs(y - prev[1])
  const tDiff = t - prev[0]

  if (mDiff > tDiff) return false

  return (tDiff - mDiff) % 2 === 0
}

console.log(res())
