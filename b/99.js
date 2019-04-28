// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8')

const stdin = `8 13`

const [a,b] = stdin.split('\n')[0].split(' ').map(Number)

const diff = b - a

let tower = 0
let towers = []
for (let i = 1; i <= 999; i++) {
  tower += i

  towers.push(tower)
}

let res = 0
towers.forEach((e, i) => {
  if(i > 0){
    if(e - towers[i-1] === diff){
      res = e - b
    }
  }
})

console.log(res)