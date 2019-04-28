// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8')

const stdin = `ant
obe
rec`

const [...row] = stdin.split('\n').filter(e=>e).map(e=>e.split(''))

console.log(`${row[0][0]}${row[1][1]}${row[2][2]}`)