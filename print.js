var printerDymo = require('printer-dymo'),
    fs = require('fs');

// It takes a second or two for initialization to complete.
setTimeout(function(){

    // Gets an array of IPrinter objects (Dymo printers on the current system)
    printerDymo.getPrintersAsync(null, function(err, printers){
        if (err) throw err;
        console.log(printers);
    });

    // A print object;
    var printArgs = {
        printer: 'DYMO LabelWriter 450',	//name of printer
        jobTitle: 'My Sweet Labels',
        labels:[{
            filename: 'CafeLabel.label',		//path to label
            fields: {
                name: 'Timmy',
                coffe: 'HotChocolate'
            },
            
        }]
    };

    printerDymo.print(printArgs, function(err, res){
        if (err) throw err;
        console.log("Finished Printing.");
    });

}, 2000);
