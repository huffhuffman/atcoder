// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8')

const stdin = `119`

const s = stdin.split('\n')[0]

const res = s.split('').map(e => {
  if(e === '1') return '9'
  if(e === '9') return '1'
  return e
}).join('')

console.log(res)