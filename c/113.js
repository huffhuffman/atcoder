// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8').trim()

const stdin = `5 5
3 9
2 10
4 2
4 30
3 6`

const [n, m] = stdin
  .split('\n')[0]
  .split(' ')
  .map(Number)
const [_, ..._py] = stdin.split('\n')
const py = _py.map((v, i) => [...v.split(' ').map(Number), i])

const ans = () => {
  const pys = py.sort((a, b) => a[1] - b[1])

  let prefs = []

  let codeList = []

  for (let i = 0; i < m; i++) {
    const [p, y, idx] = pys[i]

    if (prefs[p] === undefined) {
      prefs[p] = 1
    } else {
      prefs[p]++
    }

    const x = prefs[p]
    const codeP = `000000${p}`.slice(-6)
    const codeX = `000000${x}`.slice(-6)

    const code = `${codeP}${codeX}`

    codeList[idx] = code
  }

  for (let i = 0; i < m; i++) {
    console.log(codeList[i])
  }
}

ans()
