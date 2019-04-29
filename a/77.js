// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8')

const stdin = `pot
top`

const [u, l] = stdin.split('\n')

console.log(u[1] === l[1] && u[0] === l[2] && u[2] === l[0] ? 'YES' : 'NO')
