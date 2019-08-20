// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8').trim()

const stdin = `5
138 138 138 138 138`

const n = Number(stdin.split('\n')[0])

const v = stdin
  .split('\n')[1]
  .split(' ')
  .map(Number)

const ans = () => {
  const s = v.sort((a, b) => a - b)

  let res = s[0]
  for (let i = 1; i < n; i++) {
    const avg = (res + s[i]) / 2
    res = avg
  }

  console.log(res)
}

ans()

/*

500 300 > 400 -200
400 200 > 300 -200
-400

500 200 > 350 300
350 300 > 325 50
-350

300 200 > 250 100
250 500 > 375 250
-350 


*/
