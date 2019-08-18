// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8').trim()

const stdin = `3 4
4 3
4 1
2 2`

const [n, m] = stdin
  .split('\n')[0]
  .split(' ')
  .map(Number)
const [_, ..._ab] = stdin.split('\n')
const ab = _ab.map(v => v.split(' ').map(Number))

const ans = () => {
  let ab2 = ab.sort((a, b) => b[1] - a[1])

  let works = []

  for (let i = 0; i < m; i++) {
    works.push([])
  }

  for (let i = 0; i < n; i++) {
    const [days, reward] = ab2[i]

    works[days].push(reward)
  }

  console.log(works)

  let count = 0

  // 後ろから見る（残り1日からみる）
  let i = 1
  while (i <= m) {
    const remainDays = i

    // 残り日数内に収まる仕事のうち一番報酬がでかいものを選ぶ
    let max = 0
    for (let j = remainDays; j > 0; j--) {
      const work = works[j]

      if (work !== undefined && work.length > 0) {
        if (max < work[0]) {
          max = work[0]
          work.shift()
        }
      }
    }

    count += max

    i++
  }

  console.log(count)
}

ans()
