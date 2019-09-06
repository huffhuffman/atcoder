// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8').trim()

const stdin = `3
2 3
3 1
1 2`
const input = stdin.split('\n')

const N = input[0]
const A = [0]

for (let i = 1; i <= N; i++) {
  const aj = input[i].split(' ').map(Number)

  A[i] = aj
}

const ans = () => {
  let phase = 0

  let currentPhaseMatch = 0

  let count = N - 1

  const c = []
  for (let i = 0; i <= N; i++) {
    c.push(0)
  }

  const done = []

  for (let x = 0; x < N - 1; x++) {
    for (let player = 1; player <= N; player++) {
      const enemy = A[player][phase]

      if (c[player] === enemy || c[enemy] === player) {
        done.push([player, enemy])
        currentPhaseMatch++
        c[player] = 0
        c[enemy] = 0
      }

      c[player] = enemy
    }

    if (currentPhaseMatch === 0) return -1

    if (currentPhaseMatch % 2 !== 0) {
      count = N
    }

    currentPhaseMatch = 0
    phase++
  }

  return count
}

console.log(ans())
