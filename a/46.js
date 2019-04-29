// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8')

const stdin = `3 3 4`

const arr = stdin
  .split('\n')[0]
  .split(' ')
  .map(Number)

const res = _ => {
  const len = arr.filter((e, i)=>arr.indexOf(e)===i).length
  return len
}

console.log(res())