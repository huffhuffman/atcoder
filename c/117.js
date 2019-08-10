// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8').trim()

const stdin = `100 1
-100000`

let [n, m] = stdin
  .split('\n')[0]
  .split(' ')
  .map(Number)

n = n > m ? m : n

const x = stdin
  .split('\n')[1]
  .split(' ')
  .map(Number)

/* 
  駒の数だけ区間をわける
  answer = わけた区間の距離の合計
  区間を分ける = 駒の数 - 1の線を入れる
  どこに線を入れるか = 2点の差が大きいところから順番に線を入れる
*/

const ans = () => {
  const sorted = x.sort((a, b) => a - b)

  const diffs = getDiffs(sorted)

  const splitLines = getSplitLines(diffs)

  let count = 0
  for (let i = 0; i < splitLines.length; i++) {
    const begin = splitLines[i]
    const end = i === splitLines.length - 1 ? sorted.length - 1 : splitLines[i + 1] - 1

    count += sorted[end] - sorted[begin]
  }

  console.log(count)
}

const getDiffs = arr => {
  const diffs = []

  for (let i = 1; i < arr.length; i++) {
    const diff = arr[i] - arr[i - 1]

    diffs.push({
      diff,
      index: i,
    })
  }

  return diffs
}

const getSplitLines = diffs => {
  const sDiffs = diffs.sort((a, b) => b.diff - a.diff)

  const splitLines = [0]
  for (let i = 0; i < n - 1; i++) {
    const idx = sDiffs[i].index

    splitLines.push(idx)
  }

  return splitLines
}

ans()
