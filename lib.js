// gcd: 最大公約数
function gcd(a, b) {
  if (b === 0) {
    return a;
  }
  return gcd(b, a % b);
}
//またはこっち
function gcd(a, b) {
  let R
  while (a % b > 0) {
    R = a % b
    a = b
    b = R
  }
  return b
}



// 配列から空文字の要素を取り除く
// arr.filter(el=>el)
// [ 'aiu', '', '', '', '', 'kakikuk', '', '', '', '', 'sasisu' ]
// [ 'aiu', 'kakikuk', 'sasisu' ]
;['aiu', '', '', '', '', 'kakikuk', '', '', '', '', 'sasisu'].filter(el => el)

// 配列の要素の合計を計算する
const arr = [1, 2, 3, 4, 5] // === 15
const res = arr.reduce((pv, cv) => pv + cv)
console.log(res)


/*
配列に特定の要素があるかどうか
indexOfはなかったときは「-1」なので注意！（-1はfalsyではない）
*/ 
{
  const arr = [2,4,1]
  const includes4 = arr.indexOf(4) > -1
  console.log(includes4)
}

/*
配列から要素を取り除く（破壊的）> spliceでやる
*/
{
  const arr = [3, 1, 4, 1, 5]
  const index = 3
  arr.splice(3, 1) // indexの要素を取り除く
  console.log(arr) // [ 3, 1, 4, 5 ]
}

/*
配列から要素を取り除く（非破壊的）> filterでやる
*/
{
  const arr = [3, 1, 4, 1, 5]
  const index = 3
  const removed = arr.filter((e, i) => i !== index)
  console.log(removed) // [ 3, 1, 4, 5 ]（arrは元のまま）
}

// 文字列から特定の文字列にマッチしないものを除外した配列
// 'zzadzzfzaddzzfzfz' からadfのいずれかにマッチしないものを除外
// [ '', '', 'ad', '', 'f', 'add', '', 'f', 'f', '' ].filter(el=>el)
// [ 'ad', 'f', 'add', 'f', 'f' ]
const stdin = 'zzadzzfzaddzzfzfz'
const getMatched = stdin.split(/[^adf]/).filter(el => el)
console.log(getMatched)
