// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8').trim()

const stdin = `45
tgxgdqkyjzhyputjjtllptdfxocrylqfqjynmfbfucbir`

const [n, s] = stdin.split('\n')

const uniq = arr => {
  return arr.filter((e, i, self) => self.indexOf(e) === i)
}

const getSameVals = (arr, target) => {
  return arr.filter(e => target.indexOf(e) > -1)
}

const getCount = (ar1, ar2) => {
  const filtered1 = getSameVals(ar1, ar2)
  const filtered2 = getSameVals(ar2, ar1)

  return uniq([...filtered1, ...filtered2]).length
}

const ans = _ => {
  const strArr = s.split('')

  let count = 0
  for (let i = 1; i < n; i++) {
    const firstHalf = strArr.slice(0, i)
    const lastHalf = strArr.slice(i)

    let tmpCount = getCount(firstHalf, lastHalf)

    count = Math.max(tmpCount, count)
  }

  console.log(count)
}

ans()
