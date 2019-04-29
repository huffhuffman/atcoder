// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8')

const stdin = `ICEDT`

const s = stdin.split('\n')[0]

console.log(s[s.length - 1] === 'T' ? 'YES' : 'NO')
