const fs = require('fs')
const stdin = fs.readFileSync('/dev/stdin', 'utf8')

const [a, b, c, d, e, k] = stdin.split('\n').map(Number)

const antennas = [a, b, c, d, e]
const max = Math.max(...antennas)
const min = Math.min(...antennas)

const res = max - min > k ? ':(' : 'Yay!'
console.log(res)
