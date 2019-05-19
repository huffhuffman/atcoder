// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8')

const stdin = `3 70
7 60
1 80
4 50`

const [n, t] = stdin
  .split('\n')[0]
  .split(' ')
  .map(Number)

const [, ...ct] = stdin
  .trim()
  .split('\n')
  .map(e => e.split(' ').map(Number))

const filtered = ct.filter(e => e[1] <= t)

const ans = _ => {
  if(filtered.length <= 0){
    return 'TLE'
  }

  return Math.min(...filtered.map(e=>e[0]))
}

console.log(ans())

