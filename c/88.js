// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8')
 
const stdin = `3 20`

let [x, y] = stdin
  .split('\n')[0]
  .split(' ')
  .map(Number)

const res = _ => {
  let count = 1
  while (1) {
    if (n * 2 <= y) {
      n *= 2
      count++
    } else {
      break
    }
  }
  return count
}
 
console.log(res())
