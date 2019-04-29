// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8')

const stdin = `happy,newyear,enjoy`

const s = stdin.split('\n')[0]

console.log(s.split(',').join(' '))