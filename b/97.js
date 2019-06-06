// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8').trim()

const stdin = `1`

const n = Number(stdin.split('\n')[0])

const ans = _ => {
  const arr = Array(n)
    .fill(0)
    .map((_, i) => i + 1)

  const exps = arr.filter(num => {
    if (num === 1) {
      return true
    }

    for (let i = 2; i < num; i++) {
      for (let j = 2; i ** j <= num; j++) {
        const pow = i ** j
        if (pow === num) {
          return true
        }
      }
    }
    return false
  })

  return Math.max(...exps)
}

console.log(ans())
