// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8')

const stdin = `0118`

const s = stdin.split('\n')[0].split('')

const res = s.filter((e,i)=>{
  if(i === 0 || i === s.length - 1)return 0
  return s[i+1] === e && s[i-1] === e ? 1 : 0
}).length

console.log(res > 0 ? 'Yes' : 'No')
