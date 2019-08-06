// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8').trim()

const stdin = `?6?42???8??2??06243????9??3???7258??5??7???????774????4?1??17???9?5?70???76???`

const s = stdin.split('\n')[0]

const mod = 10 ** 9 + 7

const ans = () => {
  let dp = []

  for (let i = 0; i < s.length + 1; i++) {
    let mods = []
    for (let j = 0; j < 13; j++) {
      mods.push(0)
    }
    dp.push(mods)
  }

  dp[0][0] = 1

  for (let i = 0; i < s.length; i++) {
    let num = s[i] === '?' ? -1 : Number(s[i])

    // ?(0~9)を計算
    for (let j = 0; j < 10; j++) {
      if (num != -1 && num != j) continue //?ではなく、該当の数字ではない場合は次のiterationへ飛ばす

      // 現在の数値に対する0~12の余りテーブルを埋める
      for (let ki = 0; ki < 13; ki++) {
        dp[i + 1][(ki * 10 + j) % 13] += dp[i][ki] // (前回の余り * 10 + 数値)%13に前回の余りの合計を追加する
      }
    }

    for (let j = 0; j < 13; j++) {
      dp[i + 1][j] %= mod
    }
  }

  console.log(dp[s.length][5])
}

ans()
