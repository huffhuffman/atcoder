// const fs = require('fs')
// const stdin = fs.readFileSync('/dev/stdin', 'utf8')

const stdin = '3 2\n2 1'

const [H, W] = stdin.split('\n')[0].split(' ')
const [h, w] = stdin.split('\n')[1].split(' ')

console.log((H - h) * (W - w))
