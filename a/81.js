// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8')

const stdin = `000`

const s = stdin.split('\n')[0]

const res = _ => {
  return s.split('').filter(e=>e==='1').length
}

console.log(res())