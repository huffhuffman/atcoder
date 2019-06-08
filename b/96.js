// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8').trim()

const stdin = `3 3 4
2`

const [a, b, c] = stdin
  .split('\n')[0]
  .split(' ')
  .map(Number)

const k = Number(stdin.split('\n')[1])

const ans = _ => {
  const nums = [a, b, c]

  nums.sort((a, b) => b - a)

  nums[0] *= 2 ** k

  return nums.reduce((p, c) => p + c)
}

console.log(ans())
