// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8')

const stdin = `cab`

const s = stdin.split('\n')[0]

console.log(s.indexOf('a') > -1 && s.indexOf('b') > -1 && s.indexOf('c') > -1 ? 'Yes' : 'No')