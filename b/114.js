// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8')

const stdin = `35753`

const s = stdin.split('\n')[0]

let ans = Infinity

for (let i = 0; i < s.length - 2; i++) {
  const num = Number(s[i]+s[i+1]+s[i+2])
  const d = Math.abs(753-num)
  ans = d < ans ? d : ans
}

console.log(ans)