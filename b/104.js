// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8')

const stdin = `AcCCCCCCCc`

const s = stdin.trim().split('\n')[0]

const ans = _ => {
  let head,
    cCount = 0,
    lCase = true

  for (let i = 0; i < s.length; i++) {
    if (i === 0) {
      head = s[i] === 'A'
    } else if (i >= 2 && i < s.length - 1) {
      if (s[i] === 'C') cCount++
    } else {
      lCase = lCase && isLowerCase(s[i])
    }
  }

  const mid = cCount === 1

  return head && mid && lCase ? 'AC' : 'WA'
}

const isLowerCase = str => str === str.toLowerCase()

console.log(ans())
