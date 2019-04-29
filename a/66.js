// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8')

const stdin = `700 600 780`

const [a, b, c] = stdin.split('\n')[0].split(' ').map(Number)

const sorted = [a, b, c].sort((a, b)=> a-b)

console.log(sorted[0] + sorted[1])