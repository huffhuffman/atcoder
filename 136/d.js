// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8').trim()

const stdin = `RRRLLRLLRRRLLLLL`

const s = stdin.split('\n')[0]

const ans = () => {
  let arr = [0]

  let rl = []

  for (let i = 1; i < s.length; i++) {
    if (s[i - 1] === 'R' && s[i] === 'L') {
      rl.push(i)
    }

    arr.push(0)
  }

  for (let i = 0; i < rl.length; i++) {
    const ls = countL(rl[i])
    const rs = countR(rl[i])

    const l = 1 + Math.floor(ls / 2) + Math.ceil(rs / 2)
    const r = 1 + Math.ceil(ls / 2) + Math.floor(rs / 2)

    const lIndex = rl[i]
    const rIndex = rl[i] - 1

    arr[lIndex] = l
    arr[rIndex] = r
  }

  console.log(arr.join(' '))
}

const countL = num => {
  let count = 0

  for (let i = num + 1; ; i++) {
    if (s[i] === 'L') {
      count++
    } else {
      return count
    }
  }
}

const countR = num => {
  let count = 0

  for (let i = num - 2; ; i--) {
    if (s[i] === 'R') {
      count++
    } else {
      return count
    }
  }
}

ans()
