// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8')

const stdin = `2`

const n = Number(stdin.split('\n')[0])

console.log(n % 3 === 0 || n.toString().indexOf('3') > -1 ? 'YES' : 'NO')
