// const fs = require('fs')
// const stdin = fs.readFileSync('/dev/stdin', 'utf8')

const stdin = '5\n3\n2\n4\n3\n5'

const [N, A, B, C, D, E] = stdin.split('\n').map(Number)

const bottleneck = Math.min(A, B, C, D, E)

const pathBottleNeck = Math.ceil(N / bottleneck)

console.log(pathBottleNeck + 4)
