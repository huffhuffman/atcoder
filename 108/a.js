// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8')

const stdin = `6`

const _k = stdin.split('\n')[0]
const k = Number(_k)

const evens = Math.floor(k/2)
const odds = k - evens

console.log(evens * odds)