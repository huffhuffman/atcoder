// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8').trim()

const stdin = `Rainy`
const input = stdin.split('\n')

const s = input[0]

const t = ['Sunny', 'Cloudy', 'Rainy', 'Sunny', 'Cloudy', 'Rainy']

const ans = () => {
  const i = t.indexOf(s)
  console.log(t[i + 1])
}

ans()
