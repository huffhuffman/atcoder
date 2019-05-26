// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8')

const stdin = `101`

const _n = stdin.split('\n')[0]
const n = Number(_n)
const nArr = _n.split('').map(Number)

const sum = nArr.reduce((p, c) => p + c)

console.log(n % sum === 0 ? 'Yes' : 'No')
