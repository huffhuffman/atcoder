// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8')

const stdin = `5`

const n = Number(stdin.split('\n')[0])

console.log(n % 2 === 0 ? n : n * 2)
