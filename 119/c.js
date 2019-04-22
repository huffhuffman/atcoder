// const fs = require('fs')
// const stdin = fs.readFileSync('/dev/stdin', 'utf8')

const stdin = '5 100 90 80\n98\n40\n30\n21\n80\n'

const input = stdin.split('\n')

const [N, A, B, C] = input[0].split(' ')

const [, ...rest] = input

const l = rest.filter(e => e).map(Number)
const ABC = [A, B, C]


const dfs = []

for(let i = 0; i < N; i++){

  const level = []

  for(let j = 0; j < 4; j++){

    const node = j

    level.push([0, 1, 2, 3])
  }

  
  
}

function getNodes(){
  return [0, 1, 2, 3]
}

console.log(dfs)

