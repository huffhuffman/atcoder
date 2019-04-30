// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8')

const stdin = `1`

const n = Number(stdin.split('\n')[0])

console.log(n === 1 ? 0 : n - 1)
