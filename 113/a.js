// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8')

const stdin = `81 58`

const [x, y] = stdin.split('\n')[0].split(' ').map(Number)


console.log(x + y/2)