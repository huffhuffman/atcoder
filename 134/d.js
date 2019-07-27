// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8').trim()

const stdin = `5
1 1 0 1 1`

const n = Number(stdin.split('\n')[0])

const a = stdin
  .split('\n')[1]
  .split(' ')
  .map(Number)

const ans = () => {
  const aLast = a.length - 1
  const halfLine = Math.ceil(n / 2)

  const b = []

  for (let i = 0; i < n; i++) {
    b[i] = 0
  }

  for (let i = 0; i < n; i++) {
    if (i < halfLine) {
      b[aLast - i] = a[aLast - i]
    } else {
      const num = aLast - i + 1

      let count = 0
      for (let j = 2; num * j <= n + 1; j++) {
        if (b[num * j - 1] === 1) count++
      }

      if (a[aLast - i] === 1) {
        b[aLast - i] = count % 2 === 1 ? 0 : 1
      } else {
        b[aLast - i] = count % 2 === 0 ? 0 : 1
      }
    }
  }

  const filtered = b.filter(e => e === 1)

  console.log(filtered.length)
  if (filtered.length === 0) return

  let str = ''
  for (let i = 0; i < n; i++) {
    if (b[i] === 1) {
      str += ` ${i + 1}`
    }
  }
  console.log(str.trim())
}

ans()
