// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8')

const stdin = `aaaaaaaaaaaaaaab
aaaaaaaaaaaaaaab`

const [s, t] = stdin.trim().split('\n')

const ans = _ => {
  let sArr = s.split('')
  for (let i = 0; i < sArr.length; i++) {
    const last = sArr[sArr.length - 1]
    sArr = [last, ...sArr]
    sArr.pop()

    const str = sArr.join('')

    if (str === t) return 'Yes'
  }
  return 'No'
}

console.log(ans())
