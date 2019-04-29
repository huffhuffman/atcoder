// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8')

const stdin = `1000`

const x = stdin.split('\n')[0]
const r = Number(x)

console.log(r < 1200 ? 'ABC' : 'ARC')
