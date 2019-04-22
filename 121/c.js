// const fs = require('fs')
// const stdin = fs.readFileSync('/dev/stdin', 'utf8')

const stdin = '2 5\n4 9\n2 4\n'

const [n_m, ...rest] = stdin.split('\n')

const [N, M] = n_m.split(' ').map(Number)

const ab = rest.filter(e => e).map(e => e.split(' ').map(Number))

const sortedAB = ab.sort((p, c) => p[0] - c[0])

let i = 0
let cost = 0
let reqCount = M

while(1){
  if(reqCount > sortedAB[i][1]){
    reqCount -= sortedAB[i][1]
    cost += sortedAB[i][0] * sortedAB[i][1]
  } else {
    cost += sortedAB[i][0] * reqCount
    break
  }
  i++
}

console.log(cost)