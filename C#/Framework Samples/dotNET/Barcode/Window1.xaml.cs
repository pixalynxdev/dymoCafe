using System;
using System.Windows;

namespace Barcode
{
    /// <summary>
    /// Interaction logic for Window1.xaml
    /// </summary>
    public partial class Window1
    {
        public Window1()
        {
            InitializeComponent();
        }

        private void Window_Loaded(object sender, RoutedEventArgs e)
        {
            PrintersComboBox.ItemsSource = DYMO.Label.Framework.Framework.GetLabelWriterPrinters();
            PrintersComboBox.SelectedIndex = 0;
        }

        private void PrintBarcodeButton_Click(object sender, RoutedEventArgs e)
        {
            // load label template
            var label = DYMO.Label.Framework.Label.Open(
                Application.GetResourceStream(
                    new Uri("Barcode.label", UriKind.Relative)).Stream);

            // set barcode data
            label.SetObjectText("Barcode", "http://developers.dymo.com");

            // print
            label.Print(PrintersComboBox.Text);
        }

        private void PrintBarcodeAsImageButton_Click(object sender, RoutedEventArgs e)
        {
            // load label template
            var label = DYMO.Label.Framework.Label.Open(
                Application.GetResourceStream(
                    new Uri("BarcodeAsImage.label", UriKind.Relative)).Stream);

            // set data as a barcode image
            var imageStream = Application.GetResourceStream(
                    new Uri("qr.png", UriKind.Relative)).Stream;

            label.SetImagePngData("Image", imageStream);

            // print
            label.Print(PrintersComboBox.Text);

        }
    }
}
