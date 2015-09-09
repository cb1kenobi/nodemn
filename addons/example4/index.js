function jsCrunch() {
	return Math.floor(133.7 / Math.PI);
}

var start = new Date;
for (var i = 0; i < 1e8; i++) {
	jsCrunch();
}
var jsDelta = (new Date) - start;

var nativeCrunch = require('./build/Release/example4.node').crunch;

start = new Date;
for (var i = 0; i < 1e8; i++) {
	nativeCrunch();
}
var nativeDelta = (new Date) - start;

console.log('JS took ' + jsDelta + 'ms');
console.log('Native took ' + nativeDelta + 'ms');
