// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8').trim()

const stdin = `3
RRRGGGBBB`

const mod = 998244353

const n = Number(stdin.split('\n')[0])
const s = stdin.split('\n')[1]

const ans = () => {
  let S = [...s]

  console.log(S)

  let ballGroupList = []

  for (let i = 0; i < 3 * n; i++) {
    for (let j = 0; j < 3 * n; j++) {
      for (let k = 0; k < 3 * n; k++) {
        const balls = [S[i], S[j], S[k]]

        if (balls[0] !== balls[1] && balls[1] !== balls[2] && balls[0] !== balls[2]) {
          const ballGroup = [i, j, k]

          if (i) ballGroupList.push(ballGroup)
        }
      }
    }
  }

  const l = ballGroupList.length / 3

  const p = perm(l, 3)

  console.log(p)
}

const fact = num => {
  if (num === 3) {
    return 1
  }

  return n * fact(n - 1)
}

const perm = (n, k) => {
  return fact(n) / fact(n - k)
}

ans()
