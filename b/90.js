// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8').trim()

const stdin = `31415 92653`

const [a, b] = stdin
  .split('\n')[0]
  .split(' ')
  .map(Number)

const isPalindromic = num => {
  const stNum = String(num)
  const revStNum = stNum
    .split('')
    .reverse()
    .join('')

  return stNum === revStNum
}

const ans = () => {
  let count = 0
  for (let i = a; i <= b; i++) {
    count += isPalindromic(i) ? 1 : 0
  }

  console.log(count)
}

ans()
