// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8').trim()

const stdin = `6
aabbca`

const [n, s] = stdin.split('\n')

const getCount = (ar1, ar2) => {
  const s1 = ar1.filter(e=>ar2.indexOf(e) > -1)
  const s2 = ar2.filter(e=>ar1.indexOf(e) > -1)

  const uniq = new Set([...s1], [...s2])

  return uniq.size
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
