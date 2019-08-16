// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8').trim()

const stdin = `5
abaaaaaaaa
oneplustwo
aaaaaaaaba
twoplusone
aaaabaaaaa`

const n = Number(stdin.split('\n')[0])
const [_, ...s] = stdin.split('\n')

const ans = () => {
  let res = 0

  let sortedList = []
  for (let i = 0; i < n; i++) {
    const str = s[i]

    const sorted = str
      .split('')
      .sort()
      .join('')

    sortedList.push(sorted)
  }

  let obj = {}
  for (let i = 0; i < n; i++) {
    const str = sortedList[i]

    obj[str] = obj[str] === undefined ? 0 : obj[str] + 1

    res += obj[str]
  }

  console.log(res)
}

ans()
