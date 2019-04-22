// const fs = require('fs')
// const stdin = fs.readFileSync('/dev/stdin', 'utf8')

const stdin = '000\n'

const tiles = stdin
  .split('\n')[0]
  .split('')

let count = 0
for(let i = 0; i < tiles.length + 1; i++){ // length -1か？
  if(tiles[i] === tiles[i-1]){
    count++
    tiles[i] = tiles[i] === '0' ? '1' : '0'
  }
}

console.log(count)
