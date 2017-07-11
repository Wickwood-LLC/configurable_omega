// Handle the color changes and update the preview window.
(function ($) {
  Drupal.color = {
    logoChanged: false,
    callback: function(context, settings, form, farb, height, width) {
      // Background
      $('#preview', form).css('backgroundColor', $('#palette input[name="palette[bg]"]', form).val());

      // First Color
      $('#preview #preview-header', form).css('backgroundColor', $('#palette input[name="palette[first_color]"]', form).val());
 
      // Second Color
      $('#preview #preview-footer', form).css('color', $('#palette input[name="palette[second_color]"]', form).val());
 
      // Highlight
      $('#preview a', form).css('color', $('#palette input[name="palette[highlight]"]', form).val());
 
      // Text
      $('#preview', form).css('color', $('#palette input[name="palette[text]"]', form).val());
 
 
      // CSS3 Gradients.
      // var gradient_start = $('#palette input[name="palette[header_top]"]', form).val();
      // var gradient_end = $('#palette input[name="palette[header_bottom]"]', form).val();
 
      // $('#preview #preview-header', form).attr('style', "background-color: " + gradient_start + "; background-image: -webkit-gradient(linear, 0% 0%, 0% 100%, from(" + gradient_start + "), to(" + gradient_end + ")); background-image: -moz-linear-gradient(-90deg, " + gradient_start + ", " + gradient_end + ");");
    }
  };
})(jQuery);