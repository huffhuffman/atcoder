// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8')

const stdin = `isuruu
isleapyear
`

const [a, b] = stdin.split('\n')

console.log(a.length > b.length ? a : b)
